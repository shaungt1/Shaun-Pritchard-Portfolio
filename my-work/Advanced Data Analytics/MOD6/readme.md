# Advanced Analytics Course Module 6

![](RackMultipart20201204-4-iic2y4_html_237499165a11f2b9.gif)

**Reading** -

- [Query Optimization Techniques in Microsoft SQL Server](http://search.ebscohost.com/login.aspx?authtype=ip,shib&amp;custid=s9076023&amp;groupid=main&amp;direct=true&amp;db=iih&amp;AN=108773855&amp;site=ehost-live&amp;scope=site)
- [Advanced SQL Programming](http://search.ebscohost.com/login.aspx?authtype=ip,shib&amp;custid=s9076023&amp;groupid=main&amp;direct=true&amp;db=nlebk&amp;AN=345002&amp;site=ehost-live&amp;scope=site) - Joe Celko&#39;s SQL for Smarties : Advanced SQL Programming
- [ER Diagram](http://search.ebscohost.com/login.aspx?authtype=ip,shib&amp;custid=s9076023&amp;groupid=main&amp;direct=true&amp;db=iih&amp;AN=92723614&amp;site=ehost-live&amp;scope=site)

## Query Tuning in Analytics

You are planning to build analytics that can project the next year&#39;s sales. You have store at least 500 TB of data. Your analytics need to retrieve all the data and perform the analysis. Your analytics produces the output as soon as the analysis is complete. If you have a bottleneck in reading the input data from the database, then your analytics will take a long time to generate the results. If you are running the analytics in a cloud environment, then it is going to cost you a lot of money. So, it is very important to perform the query tuning. It helps us to reduce the infrastructure bill at the same time allow us to generate the analytics output quickly.

Please refer to the list below for best practices for SQL Query tuning.

1. Use the actual column names instead of using all the columns (\*) in select statements
2. Avoid using too many joins between the tables
3. Avoid using the Having clause to filter the data
4. Minimize the number of subquery blocks
5. Avoid using the in statement
6. Use union all statement instead of union
7. Use decode statement to avoid scanning of same rows
8. Do not store video or images in a database instead of only store the file path
9. Perform delete, insertion, and updates in batches
10. Apply index to the database column
11. Remove unnecessary tables

## **Research:**

##
## **Query Optimization Techniques in Microsoft SQL Server.**

Authors:

CORLĂŢAN, Costel Gabriel1 gabi.corlatan@yahoo.com

LAZĂR, Marius Mihai1 lazar\_mariusmihai@yahoo.com

LUCA, Valentina1 luca.valentina@ymail.com

PETRICICĂ, Octavian Teodor1 octavian.petricica@ymail.com

Source:

Database Systems Journal. 2014, Vol. 5 Issue 2, p33-48. 16p.

Document Type:

Article

Subject Terms:

Databases

Electronic information resources

Big data

Business databases

Database management

Database selection

Data mining

Mathematical optimization

Author-Supplied Keywords:

Index

Optimization

Query

SQL Server

Statistics

View

Abstract:

Microsoft SQL Server is a relational database management system, having MS-SQL and Transact-SQL as primary structured programming languages. They rely on relational algebra which is mainly used for data insertion, modifying, deletion and retrieval, as well as for data access controlling. The problem with getting the expected results is handled by the management system which has the purpose of finding the best execution plan, this process being called optimization. The most frequently used queries are those of data retrieval through SELECT command. We have to take into consideration that not only the select queries need optimization, but also other objects, such as: index, view or statistics. [ABSTRACT FROM AUTHOR]

Copyright of Database Systems Journal is the property of Bucharest Academy of Economic Studies and its content may not be copied or emailed to multiple sites or posted to a listserv without the copyright holder&#39;s express written permission. However, users may print, download, or email articles for individual use. This abstract may be abridged. No warranty is given about the accuracy of the copy. Users should refer to the original published version of the material for the full abstract. (Copyright applies to all Abstracts.)

Author Affiliations:

1University of Economic Studies, Bucharest, Romania

ISSN:

2069-3230

Accession Number:

**108773855**

##
## **Process and Data Logic Integration: Logical Links between UML Use Case Narratives and ER Diagrams.**

**Authors:**

Jukić, Boris1 bjukic@clarkson.edu

Jukić, Nenad2 njukic@luc.edu

Nestorov, Svetlozar3 evtimov@cs.uchicago.edu

**Source:**

Journal of Computing &amp; Information Technology. Sep2013, Vol. 21 Issue 3, p161-170. 10p.

**Document Type:**

Article

**Subject Terms:**

Data integration

Wireless communications

Computer networks

Information storage &amp; retrieval systems

Entity-relationship modeling

Information modeling

Data modeling

**Author-Supplied Keywords:**

CRUD

data model

DFD

ER diagrams

information systems development lifecycle

process model

UML

**Abstract:**

We propose a methodology for providing clear and consistent integration of the process and data logic in the analysis stage of information systems&#39; development lifecycle. While our proposed approach is applicable across a variety of data and process modeling schemas, in this paper we discuss it in the context of UML use cases for process modeling and ER diagrams for data modeling. We illustrate our approach through an example of modeling an execution of a retail transaction. In our example we integrate a step-by-step process model and the corresponding data model at the attribute level detail. We discuss the potential benefits of this approach by illustrating how this methodology, by providing a critical link between process and data models, can result in better conceptual testing early in the analysis process, ensuring better semantic quality of both process and data models. [ABSTRACT FROM AUTHOR]

Copyright of Journal of Computing &amp; Information Technology is the property of CIT. Journal of Computing &amp; Information Technology and its content may not be copied or emailed to multiple sites or posted to a listserv without the copyright holder&#39;s express written permission. However, users may print, download, or email articles for individual use. This abstract may be abridged. No warranty is given about the accuracy of the copy. Users should refer to the original published version of the material for the full abstract. (Copyright applies to all Abstracts.)

**Author Affiliations:**

1School of Business, Clarkson University, Potsdam, NY, USA

2Quinlan School of Business, Loyola University Chicago, USA

3Computational Institute, University of Chicago, USA

**ISSN:**

1330-1136

**DOI:**

10.2498/cit.1002192

**Accession Number:**

**92723614**