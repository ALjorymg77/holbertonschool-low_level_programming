Naive algorithm result: 625025000
Naive algorithm time: 2.747054 seconds
Single-pass algorithm result: 25000
Single-pass algorithm time: 0.000116 seconds
Naive algorithm result: 625025000
Naive algorithm time: 2.749156 seconds
Single-pass algorithm result: 25000
Single-pass algorithm time: 0.000106 seconds
Naive algorithm result: 625025000
Naive algorithm time: 2.759192 seconds
Single-pass algorithm result: 25000
Single-pass algorithm time: 0.000112 seconds

## Timing summary

All three runs used the same sandbox and the unchanged provided source.

| Run | Naive time (seconds) | Single-pass time (seconds) |
| --- | ---: | ---: |
| 1 | 2.747054 | 0.000116 |
| 2 | 2.749156 | 0.000106 |
| 3 | 2.759192 | 0.000112 |
| Mean (rounded) | 2.751800667 | 0.000111333 |

## Calculations

Mean = sum of the three execution times / 3.

Naive mean = 8.255402 / 3 seconds.
Single-pass mean = 0.000334 / 3 seconds.

Runtime ratio = mean naive time / mean single-pass time.
Using the unrounded means: 8.255402 / 0.000334 = approximately 24716.77.

The naive implementation took approximately 24,717 times as long as the single-pass implementation in these measurements.

## Interpretation

The naive implementation uses nested loops, while the single-pass implementation traverses the array once.

The outputs differ: naive returns 625025000, while single-pass returns 25000. The naive implementation repeatedly counts even elements in each array prefix. Therefore, this timing ratio compares the provided workloads; it does not demonstrate a speedup between implementations producing equivalent results.

The single-pass measurements are very short, so the ratio is approximate and sensitive to timing resolution and run variability.
