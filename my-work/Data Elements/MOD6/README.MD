# Data Elements QMB4000 Module 6

**By the end of this module you should be able to:**

- Review sampling methods for data.
- Practice Sampling techniques/ creating a data mart for a specific purpose.
- Explain the advantages and disadvantages of sampling.
- Evaluate the accuracy and bias tradeoffs.

## **Assignments**

Reading -

- [Improve your data quality using sampling distribution](http://go.oreilly.com/rasmussen-college/library/view/improve-your-data/9781491978337/ch01.html)

## **Sampling Techniques**

Data sampling allows us to determine what type of data to use along with the analytics process. There are various data sampling methods. If you want to predict fraudulent transactions in future, then it is better to consider all the past fragment transactions. It gives us an indication of the potential future fraudulent transaction.

Random sampling: It allows the user to select the random data within range. For example, your analytics requires random data between 1-100 for at least five integers.

**Output** : 45,65,77,44,33

**Cluster Sampling:** It partitions the data into the group and then obtains a random sample from all possible clusters. For example, your analytics requires random data between 1-100 for at least five integers.

Group 1: 1-10

| Group | Range | Random Sample |
| --- | --- | --- |
| 1 | 1-20 | 12 |
| 2 | 21-40 | 33 |
| 3 | 41-60 | 45 |
| 4 | 61-80 | 65 |
| 5 | 81-100 | 95 |

Stratified Sampling: It is useful when it makes sense to partition the input data into the groups. Groups are also known as strata. It allows you to partition into the group and obtain a random sample data from each group. It then collects the data on each sampling unit.

| Patient | All patients across the USA |
| --- | --- |
| Group | Cancer, hepatitis |
| Obtain a sample | 100 people with cancer from different time zone |
| Sample | 4\*100= 400 selected patients |

Unrestricted Random Sampling: If you need to extract ten numbers without worrying about the limits, then it is considered as unrestricted random sampling.

Restricted Random Sampling: If you need to extract 100 numbers within 1-10000 limit, then it is considered as restricted random sampling.

## **Additional Resources**

[Become a Python Data Analyst](http://go.oreilly.com/rasmussen-college/videos/statistics-for-data/9781789345339)

[Data Science Fundamentals Part 2: Machine Learning and Statistical Analysis](http://go.oreilly.com/rasmussen-college/videos/data-science-fundamentals/9780134778877)

[Statistics for Data Science](http://go.oreilly.com/rasmussen-college/videos/statistics-for-data/9781789345339)

[Basic Statistics and Data Mining for Data Science](http://go.oreilly.com/rasmussen-college/videos/basic-statistics-and/9781788476782)