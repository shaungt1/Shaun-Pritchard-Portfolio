/* Developer: Shaun Pritchard */
/* Date: 7/23/20 */
/* Source Files: trian.csv */
/* Purpose: SAS script and read the datasets into SAS for analysis */
/* Output:Calulate the MEAN midpoint of selected dataset */


PROC IMPORT OUT = T_Mean
    DATAFILE= '/folders/myshortcuts/IntroductionToScript/RawData/train.csv/train.csv';
	DBMS =CSV REPLACE;
	GETNAMES=YES;
	DATAROW=2;
RUN;


PROC MEANS DATA=WORK.T_Mean;
TITLE "Trian Weekly Sales Mean Data Calulation";
FOOTNOTE c=black italic "Data Statistics Calulated on:" &sysdate9.;
run;

/*Sort data by date*/
PROC SORT DATA=WORK.T_Mean OUT=Work.TSort;BY Date; run;

/*Show Stats for weekly sales department and store sorted by date*/
PROC MEANS DATA=Work.TSort;
Title"Weekly Stats For All Stores and Departments";
title2 "Note:when I tried to run CLASS Weekly_Sales It would keep running and never output?";
FOOTNOTE c=black italic "Descriptive statistics that represents weekly sales for a certain 
department in a given store in a given week" "Data Statistics Calulated on:" &sysdate9.;
VAR Weekly_Sales Dept Store;
Class Date ;
run;

/*THIS IS THE CODE THAT SHOULD HAVE WORKED DO NOT RUN WILL CRASH*/
/* PROC MEANS DATA=Work.TSort; */
/* Title"Weekly Sales Stats For All Stores and Departments By Date"; */
/* FOOTNOTE c=black italic "Descriptive statistics that represents weekly sales for a certain  */
/* department in a given store in a given week" "Data Statistics Calulated on:" &sysdate9.; */
/* VAR Store Dept ; */
/* Class Weekly_Sales   ; */
/* run; */

/*Individual Deptartment Weekly Sales Stats*/
PROC MEANS DATA=Work.TSort;
Title"Weekly Sales Stats For All Stores and Departments By Date";
FOOTNOTE c=black italic "Descriptive statistics that represents weekly sales for a certain 
department in a given store in a given week" "Data Statistics Calulated on:" &sysdate9.;
VAR Weekly_Sales  ;
Class dept ;
run;


