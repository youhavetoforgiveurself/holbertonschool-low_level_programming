# Green Tech Efficiency & Benchmarking Lab

## Measurement Methodology

For this project, i wanted to see which program was actually faster instead of just assuming stuff. I used the required GCC flags: `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-long-long`. I kept the original calculations the same and only added timing code where i was allowed to.

The programs use `clock()` to check how much CPU time they take, then `CLOCKS_PER_SEC` to convert that time into seconds. So basically, we're measuring how long the CPU was working, not how much electricity it used.

For the baseline test, i ran the program three times. The results were **0.096196**, **0.089399**, and **0.089504 seconds**. The average was **0.091700 seconds**. The first one took a bit longer than the other two, even though the program was doing the exact same thing every time. So yeah, one run doesn't really tell you everything.

## Observed Performance Differences

For the algorithm comparison, the naive version took **1.877055**, **2.042557**, and **1.487683 seconds**. Its average was **1.802432 seconds**.

The single-pass version took **0.000104**, **0.000103**, and **0.000101 seconds**, with an average of around **0.000103 seconds**.

Using the averages before rounding, the naive version took about **17,556 times as long** as the single-pass version. That's a pretty big difference.

But here's the thing, the naive algorithm keeps going through the same numbers again and again because it has a loop inside another loop. The single-pass one just goes through everything once.

And they don't even give the same answer. The naive one returns **625025000**, while the single-pass one returns **25000**.

So what's the point of being faster if you're not even getting the same answer? The timing difference is real, but it's not exactly a fair comparison of two programs doing the same job.

For the instrumentation experiment, the total time was **0.000330 seconds**. Building the data took **0.000139 seconds**, processing took **0.000122 seconds**, and reducing the checksum took **0.000069 seconds**.

I started measuring before building the dataset and stopped after the checksum was calculated. Each part was measured separately too. Building the data took the most time in this run, but all three parts were pretty quick.

## Relation Between Runtime and Energy Consumption

The idea here is pretty simple. If a program keeps the CPU busy for longer, it can end up using more energy.

So making code more efficient can help, especially when we're talking about programs running a lot of times.

But that doesn't mean i can just look at the execution time and know how much electricity was used. We didn't measure watts or actual energy consumption, just CPU time.

So saying exactly how much energy was saved would basically be guessing, and that's not what this project is about.

## Limitations of the Experiment

One problem is that i only ran the baseline and comparison programs three times, and i only recorded one instrumentation run.

Different things happening on the computer can affect the results. Also, when a program takes almost no time, even a tiny difference can look bigger than it really is.

Another issue is that the two algorithms don't give the same result. So even though one is way faster, we can't really call it a fair comparison of two correct ways to solve the exact same problem.

And since we didn't actually measure electricity, we can't make exact claims about energy savings either.

## Practical Engineering Takeaway

What i learned from this project is that guessing which code is faster isn't really enough. You have to test it, check the numbers, and make sure the program is actually doing what it's supposed to do.

Because seriously, what's the point of having super fast code if it's not even giving you the right answer?

If i did this again, i'd run more tests and compare programs that actually return the same result. I'd also use proper tools to measure energy instead of just relying on execution time.

At the end of the day, being efficient is good, but being correct matters just as much.

"Festina lente" - Augustus.
