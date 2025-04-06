## loop.bash 

```bash
#!/bin/bash

for t in 1 2 4 8
do
    for n in 100 1000 10000 50000 100000
    do 
        g++ proj01.cpp -DNUMT=$t -DNUMTRIALS=$n -o proj01 -lm -fopenmp
        ./proj01
    done
done
```

## cmd
```
bash loop.bash >& loop.csv
```
