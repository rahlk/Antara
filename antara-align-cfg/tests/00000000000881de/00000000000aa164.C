#include<stdio.h> 
#include<SQLAPI.h>		 // main SQLAPI++ header 

int main(int argc, char* argv[]) 
{ 
	// create connection object to connect to database 
	SAConnection con; 
	try
	{ 
		// connect to database 
		// in this example, it is Oracle, 
		// but can also be Sybase, Informix, DB2 
		// SQLServer, InterBase, SQLBase and ODBC 
		con.Connect ("test", // database name 
					"tester", // user name 
					"tester", // password 
					SA_Oracle_Client); //Oracle Client 
		printf("We are connected!\n"); 

		con.Disconnect(); 
		printf("We are disconnected!\n"); 
	} 

	catch(SAException & x) 
	{ 
		try
		{ 
			// on error rollback changes 
			con.Rollback (); 
		} 
		catch(SAException &) 
		{ 
		} 
		printf("%s\n", (const char*)x.ErrText()); 
	} 
	return 0; 
} 
