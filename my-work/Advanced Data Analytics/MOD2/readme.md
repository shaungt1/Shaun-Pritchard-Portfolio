# Advanced Analytics Course Module 2

![](RackMultipart20201204-4-13qktwy_html_237499165a11f2b9.gif)

### **Big Data**

Big Data

We are living in the data ocean. Our daily life is becoming more and more about data. Big data means a lot of data or large datasets that cannot be processed using a single computer with 1 GB RAM. You need various tools/platform to process this large dataset. There are a lot of benefits of using big data. Here are just some of the examples.

- Extract the data from millions of cars on the road and predict any failures ahead of time
- Collect data from millions of users and target the ads according to their preferences

**Big Data on Hadoop**

![](RackMultipart20201204-4-13qktwy_html_6d9cd8117272669d.jpg)

Hadoop has the following components.

- Map Reduce
- HDFS
- Yarn Framework
- Common utilities

Hadoop architecture runs using the MapReduce algorithm. The user simply submits the job to the Hadoop. MapReduce refers to two distinct types of tasks.

1. Map task: It converts the input data into a set of data. All the elements are broken into key/value pair.
2. Reduce task: It takes the output from the map task and combines those data into smaller tuples.

MapReduce framework has a single master node and many tasks nodes. The master node is responsible for resource management, scheduling the task on the tasks nodes and monitoring them. Task node gets the command from the master and executes the job. It reports to the master node about the job completion status.

**Example**

HDFS provides a distributed file system that is designed to run on the large size clusters. HDFS also uses master/slave architecture. It has a single name node that manages the file system metadata and one or more slave DataNodes.

Please download this [file](https://content.learntoday.info/Learn/QMB4200Cfw_Winter_18/Media/mod02_database_setup.pdf) and follow the instructions for creating a database and loading CSV data into a table.

It is a prerequisite to enter the data into the script to produce the analytics output. Data is usually stored in a central location. Your script needs to read the data. Please refer to below diagram.

![](RackMultipart20201204-4-13qktwy_html_d41943c161bc9d00.png)

Here is the step by step operation to generate the output data.

Step 1: Determine the actual input data source based on the analytic problem.

Step 2: Use either data store or database and locate all the data.

Step 3: Create analytics script and read the data from database or data store.

Step 4: Generate the analytic output.

Step 5: Store the output into the database or data store.

Step 6: Use the visualization software such as Spotfire or SSRS to visualize the data.

Here are the main functions of your analytics script.

1. Data integration
2. Data sampling
3. Data access
4. Data security
5. Analytics
6. Data cleansing

**Input Data into SAS Script**

There are various ways to input the data into SAS script. It is required to input the data into SAS program as your SAS program reads data from input files and then generates the output.

Please download the following [file](https://content.learntoday.info/Learn/QMB4200Cfw_Winter_18/Media/mod02_sas_dataset_script.pdf) to create a temporary SAS data set and use it inside your SAS script.