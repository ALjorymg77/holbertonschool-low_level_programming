# Green Efficiency Analysis

## Measurement Methodology

I used the same Holberton Ubuntu sandbox for all measurements. Programs were compiled using `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-long-long`, without additional optimization flags. I preserved the supplied baseline and comparison logic, inputs, and timing code. I ran each of those programs three times and recorded the complete outputs in `baseline_loop-metrics.md` and `comparison_algorithms-metrics.md`.

For `instrumentation_lab.c`, I preserved the dataset generation, processing, and checksum calculations. I added four `clock_t` boundaries: immediately before building the dataset and immediately after each of the three phases. Adjacent differences measure BUILD_DATA, PROCESS, and REDUCE; the first-to-last difference measures TOTAL. Each difference is converted to seconds using `CLOCKS_PER_SEC`. These shared boundaries consistently divide the workload, include timer overhead, and exclude output printing. The instrumented program was observed once.

## Observed Performance Differences

The baseline reported 0.227657, 0.226866, and 0.227173 seconds for 100000000 iterations. Its mean was 0.227232 seconds. These values demonstrate small variation across repeated runs.

The naive implementation reported 2.747054, 2.749156, and 2.759192 seconds, averaging 2.751800667 seconds. Single-pass reported 0.000116, 0.000106, and 0.000112 seconds, averaging 0.000111333 seconds. Dividing the unrounded means gives approximately 24716.77: the naive workload took about 24,717 times as long in this experiment.

However, the reported counts were 625025000 and 25000, respectively. The naive function recounts even elements in each prefix, while single-pass counts each even element once. Therefore, the timing ratio is not evidence of equivalent-output optimization.

The instrumentation output was TOTAL 0.000754 seconds, BUILD_DATA 0.000289 seconds, PROCESS 0.000322 seconds, and REDUCE 0.000143 seconds. TOTAL equaled the displayed phase sum and exceeded each phase. PROCESS was the longest phase in this run.

## Relation Between Runtime and Energy Consumption

The outputs contain CPU execution times, not electrical power or energy measurements. Electrical energy depends on power over elapsed time, while `clock()` measures process CPU time. If average power and other conditions were comparable, completing equivalent work sooner could reduce energy use. Those conditions were not measured here. Consequently, neither the runtime ratio nor the phase timings justify a numerical claim about joules, watts, carbon emissions, or percentage energy savings.

## Limitations of the Experiment

Only three baseline and comparison runs were collected, and instrumentation has only one observation. All measurements came from one sandbox, so they do not establish performance on other hardware. The logs do not quantify background activity, shared-resource interference, or timing resolution. The single-pass durations are extremely short, making the ratio sensitive to small absolute timing changes. The unequal comparison outputs also limit any conclusion about algorithmic correctness or practical optimization.

## Practical Engineering Takeaway

The measurements support a disciplined workflow: first verify equivalent results, then compare repeated timings under consistent conditions. Here, correctness checking exposed a major limitation that a large timing ratio alone would conceal. Phase measurement also identified PROCESS as a candidate for further profiling in this particular run. Before changing it, I would collect more phase measurements and confirm that it remains the largest contributor. Any later optimization should preserve the dataset and checksum behavior, be measured again with the same build settings, and be evaluated using the full workload rather than an isolated timing improvement.
