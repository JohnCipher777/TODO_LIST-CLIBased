#include<stdio.h>
#include<stdlib.h>
int main(){
    static char filenames[][50] = {
        "TODO-LIST_CLI.c",
        "MainClass.class",
        "DataList.class",
        "MainClass.java"
    }; // Replace with the names of the files you want to hide

    int numFiles = sizeof(filenames) / sizeof(filenames[0]);

    for (int i = 0; i < numFiles; i++) {
        // Use the system function to run the attrib command
        char command[100];
        sprintf(command, "attrib +h +s %s", filenames[i]);
        system(command);
    }
	system("javac MainClass.java");
	system("java MainClass.java");
	return 0;
}
