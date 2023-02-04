# Data Elements QMB4000 Module 5

**By the end of this module you should be able to:**

- Reduce to a one-to-many data set.
- Explore dummy data and how to use it.
- Merge different data sets together to answer business questions.

**Assignments**

Reading -

- [Chapter 8: INNER JOINs](http://go.oreilly.com/rasmussen-college/library/view/sql-queries-for/9780134858432/ch8.xhtml)
- [Chapter 9: OUTER JOINs](http://go.oreilly.com/rasmussen-college/library/view/sql-queries-for/9780134858432/ch9.xhtml)
- [Chapter 10: UNIONs](http://go.oreilly.com/rasmussen-college/library/view/sql-queries-for/9780134858432/ch10.xhtml)

## **Reducing Data**

Understanding how to reduce data is important for any analyst because most datasets are considered large. Reducing data allows an analyst to work with it easier and to capture DISTINCT populations. Distinct populations help eliminate redundancy, for example, counting the distinct number of patients, will only count each patient once. If a patient appears multiple times, that duplication will no longer appear. Understanding when to use this approach is also critical because you lose data.

[Approximate Distinct Counts for Billions of Datasets](https://learning.rasmussen.edu/bbcswebdav/pid-7101722-dt-content-rid-163671091_1/xid-163671091_1) ![](RackMultipart20201230-4-1yr9gzj_html_e5c16d5ff82227e0.gif)

## **Many to Many Dimensionalities**

Go search for datasets with a many-to-many dimensionality. It should look like the restaurant airport with repeating information and another example is below. Please find two datasets (they can contain any data).

| Number | Color |
| --- | --- |
| 1 | Red |
| 1 | Red |
| 2 | Blue |
| 3 | Green |
| 4 | Orange |
| 5 | Purple |

## **Joins**

Review the following presentation about Joins.

[Joins Presentation](https://learning.rasmussen.edu/bbcswebdav/pid-7101724-dt-content-rid-163671092_1/xid-163671092_1)

## **Dummy Data**

Dummy variables introduce a way of working with nominal values when an analyst has categorical variables. If you are trying to predict a football team&#39;s next win and the dataset only has &quot;W&quot; or &quot;L&quot;, no algorithm can process that. Dummy variables would introduce a &quot;1&quot; for &quot;W&quot; and a &quot;0&quot; for &quot;L&quot;. This would allow the data to be fed through any algorithm adding predictability!

[Dummy Variables](https://learning.rasmussen.edu/bbcswebdav/pid-7101725-dt-content-rid-163671093_1/xid-163671093_1)