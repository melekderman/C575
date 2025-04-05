04/02/2025

# Notes

! [Office Hours](https://web.engr.oregonstate.edu/~mjb/cs575/)

! This is for CS majors but it might be interesting: [Programming Interviews Exposed: Secrets to Landing Your Next Job](https://www.amazon.com/Programming-Interviews-Exposed-Through-Interview/dp/111941847X/ref=sr_1_2?dchild=1&keywords=Programming+Interviews+Exposed%3A&qid=1613775172&s=books&sr=1-2)

# About Project #0

..

# Scripting

[Scripting Slides](https://web.engr.oregonstate.edu/~mjb/cs575/Handouts/scripting.1pp.pdf)

for OpenMP

omp_set_num_threads( NUMT )

**in a bash script:**
```
-DNUMT = 8
```

**-D** means define.

```
#!/bin/bash
# number of threads:
for t in 1 2 4 6 8
do
    echo NUMT = $t
    # number of subdivisions:
    for s in 2 4 8 16 32 64 128 256 512 1024 2048 3072 4096
    do
        echo NUMS = $s
        g++ -DNUMS=$s -DNUMT=$t prog.cpp -o prog -lm -fopenmp
        ./prog
    done
done
```

**for command line arguments:**
```
int main( int argc, char *argv[ ] )
. . .
```

❗️ page 10-14 in Scripting slides, bash script icine tanimladigin loop icin bunlara bak!

Scripting page 16

"""
I know what you’re thinking.
You’re thinking:
"Those scripts are different, and I’ve never done them before, and I don't
want to take the 5 minutes to learn them. So, I’ll just build the iterations
through all the parameters into for-loops in the program."
Don’t!
I see evidence that the first time OpenMP does anything, it also does some
one-time setups. This will mess up your timing because your first test will
seem slower than it should be and the others will seem artificially faster by
comparison.
I recommend you run the program separately for each combination of
parameters. (The script code in the previous pages shows that.) """

!! Page 18, create .cvs file

# Pivot Tables

[Pivot Tables Presentation](https://web.engr.oregonstate.edu/~mjb/cs575/Handouts/pivot_tables.1pp.pdf)

# Graphing

[Graphing Presentation](https://web.engr.oregonstate.edu/~mjb/cs575/Handouts/graphing.1pp.pdf)

Transpose the data

``` 
g++ proj01.cpp -o proj00 -lm -fopenmp
```

```
bash loop.bash >& proj00.csv
```

# OpenMP

[OpenMP Presentation](https://web.engr.oregonstate.edu/~mjb/cs575/Handouts/openmp.1pp.pdf)

❗️❗️ See Page 5 & 6: Setting details for VC code and more

❗️❗️ See page 13, 15

page 15 is very important

Last slide: Page 16.

Notes to self
❗️ yarim kalan kursu bitir.