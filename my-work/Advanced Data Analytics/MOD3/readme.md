# Advanced Analytics Course Module 3

![](RackMultipart20201204-4-166qd6z_html_237499165a11f2b9.gif)

**Reading** -

- _Data Architecture: A Primer for the Data Scientist_, Chapters 3.1-3.6
- [Data Integration Approaches using ETL](http://search.ebscohost.com/login.aspx?authtype=ip,shib&amp;custid=s9076023&amp;groupid=main&amp;direct=true&amp;db=iih&amp;AN=114648777&amp;site=eds-live)
- [Optimization of ETL Process in Data Warehouse Through a Combination of Parallelization and Shared Cache Memory](http://search.ebscohost.com/login.aspx?authtype=ip,shib&amp;custid=s9076023&amp;groupid=main&amp;direct=true&amp;db=iih&amp;AN=120313998&amp;site=eds-live)

ETL Process

The ETL process is widely used in the industry to extract the data from the source system and bring it into the data warehouse environment. The ETL process has three main components.

- Data Extraction
- Data Transformation
- Data Loading

![](RackMultipart20201204-4-166qd6z_html_59e9673bcb005b17.png)

**Data Extraction:** It is a first step in the ETL process. Data is extracted from the source. The data source can be either a flat file or CSV file or database tables.

**Data Transformation:** You need to perform data validation in this step. If the legacy system is storing the only date but the new system would also need to have a time information, then you will convert the date into DateTime data type.

**Data Loading:** It is considered as the last step in the data migration process. Your data that is already transformed and ready to be ingested into the new system. You will perform a data loading process and move your data to the destination data source.

## **Migrate the Data** (Document in MOD 3 directory)

Please download this [file](https://content.learntoday.info/Learn/QMB4200Cfw_Winter_18/Media/mod03_migration.docx) to review how to migrate data.