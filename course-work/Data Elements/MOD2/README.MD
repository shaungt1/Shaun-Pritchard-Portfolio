# Data Elements QMB4000 Module 2

By the end of this module you should be able to:

- Explore common database designs.
- Examine a normalized database.
- Compare and contrast common database storage architecture.
- Understand the differences between NULL/MISSING values and Data Types.
- Examine the purpose of data marts.

| **Assignments** |
| --- |

**Reading -**

- [Bura, D., &amp; Singh, R. K. (2012). Implementing Constraints in Entity-Relationship Models for Enhancing Normalization. IUP Journal Of Information Technology, 8(2), 46-57](http://search.ebscohost.com/login.aspx?authtype=ip,shib&amp;custid=s9076023&amp;groupid=main&amp;direct=true&amp;db=iih&amp;AN=78123397&amp;site=eds-live).
- [Chilton, M. A. (2006). Data Modeling Using Entity Relationship Diagrams: A Step-Wise Method. Journal Of Information Systems Education, 17(4), 385-394](http://search.ebscohost.com/login.aspx?authtype=ip,shib&amp;custid=s9076023&amp;groupid=main&amp;direct=true&amp;db=bth&amp;AN=23720684&amp;site=eds-live).

## **Common Database Structures**

Databases can come in many forms and some organizations have different models. The most common models are MSSQL and Oracle SQL SERVER. The differences are minimal, but they are important to understand, so that you can properly query the different databases and structures.

[Common Database Designs](https://learning.rasmussen.edu/bbcswebdav/pid-7101699-dt-content-rid-163671088_1/xid-163671088_1)

Data preparation is a very important step in the analytics development process. Analytics developer usually needs to extract the data from various sources. Data preparation techniques usually depend on the type of analytics that the developer needs to write. For example, you are working for a retail store. You need to forecast the inventory for the next holiday season. You need to capture data from various sources.

**You also need to rely on historical data for the last several years. Here are some of the important data fields:**

- Zip code
- Ethnicity
- Previous holiday season sales data
- Historical Store hours data
- Competition
- Shopping method online/store

![](RackMultipart20201230-4-fqmki8_html_88dfcb734c8383e7.png)

**Please refer to the above process. Here are various steps involved in forecasting next year&#39;s inventory requirement.**

- Step 1: Collect data from the historical data source
- Step 2: Extract sales-related data from data source A, B and C
- Step 3: Perform the data transfer to the central data store
- Step 4: Write the analytics to forecast the inventory for the next year
- Step 5: Store the output into the data store
- Step 6: Use visualization tool or report to analyze the data

**Analytics process usually involves the following steps.**

- Analyze the business problem
- Identify data sources
- Prepare the data set
- Execute the analytics
- Generate the output

The analytics output quality depends on the type quality of the input data as well as the accuracy of the analytics algorithm.

## **SAS**

You will use a SAS University Edition with Oracle Virtual Box to build the SAS, which is Mac/Linux/Windows compatible. You may want to insert the following: This course will not use the online version of SAS University Edition/AWS.

You can download Oracle Virtual Box [here](https://www.virtualbox.org/wiki/Downloads).

You can download SAS University Edition [here](https://www.sas.com/en_us/software/university-edition.html).

## **Relational Models**

The relational model was introduced by E.F.Codd. Relational database management system (RDMS) is a DBMS system that is based on the relational model. There are various RDBMs available in the market. Here are a few examples.

- Oracle
- SQL Server
- Microsoft Access
- DB2

The data is usually stored in the tables. For example, please refer to the Customer and Order table.

_ **Customer Table: Customer ID, FirstName, LastName, City, State, Zip** _

_ **Order Table: OrderID, CustomerID, OrderTotal, ItemDescription** _

![](RackMultipart20201230-4-fqmki8_html_f20c75b5d1eba139.png)

If you need to retrieve the data from the customer as well as itemDescription, then you need to connect the customer and order table by CustomerID.

## **Database Design**

Database design is a very important step in the Application development process. Here is the step by step activity.

- Analyze the business problem.
- Determine main entities.
- Determine the entity attributes.
- Establish relationships between entity and attributes (ER diagram).
- Apply normalization.
- Implement database.
- Establish integrity rules.
- Store the data.

ER Diagram

ER diagram shows the relationship between the entity sets that are stored in the database. The rectangle symbol represents entities. The relationship between the two entities are represented the diamond shape. Each entity has a set of attributes. It shows the unique characteristics of the entity. Attributes are represented by an oval shape. Please follow below steps to draw ER diagram.

For example, let us talk about an example of a car accident.

Step 1: Review the business and identify all the entities

- Person
- Car
- Accident

Step 2: Review all the entities and determine any possible relationship between them

- Person -\&gt; car
- Car -\&gt; accident

Step 3: Describe the relationship

- Person Owns Car
- Car Participated Accident

Step 4: Determine attributes for each entity

- Person: Driver-ID, Driver\_Fname, Driver\_Lname, Driver\_Address,
- Driver\_City, Driver\_State, Driver\_Zip
- Car: License\_Tag, VIN, Model, Year
- Accident: Report-Number, Acc\_Location, Acc\_Date

Step 5: Add cardinalities such as one to one or one to many or many to many relationships between two entities.

![](RackMultipart20201230-4-fqmki8_html_aaaadf7143999085.png)

| Architecture |
| --- |

Data Architecture is also considered a schema design, where each dimension is called a dimension table that is composed of facts. An unstructured schema is considered non-normalized, while a structured environment is called normalized. This module will discuss different schema layouts and list pros and cons for each of those layouts. This is important to understand, so that when you design a structure you can identify the best methods to do so.

[Data Architecture](https://learning.rasmussen.edu/bbcswebdav/pid-7101701-dt-content-rid-163671089_1/xid-163671089_1) ![](RackMultipart20201230-4-fqmki8_html_e5c16d5ff82227e0.gif)