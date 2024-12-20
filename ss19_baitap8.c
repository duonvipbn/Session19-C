#include <stdio.h>
#include <string.h>
struct student {
	int id;
    char name[50];
    int age;
    char phoneNumber[15];
};

void printStudents(struct student students[], int n){
	for(int i = 0; i < n; i ++){
		printf("id: %d, name: %s, age: %d, phone number: %s",
		students[i].id, students[i].name, students[i].age, students[i].phoneNumber);
		printf("\n");
	}
}

void bubbleSort(struct student students[], int n){
	struct student temp;
	for(int i = 0; i < n-1; i++){
		for(int j = 0; j < n-i-1; j++){
			if(strcmp(students[j].name, students[j+1].name) > 0){
				temp = students[j];
				students[j] = students[j+1];
				students[j+1] = temp;
			}
		}
	}
}

int main(){
	student students[5] = {
		
 		{1, "a", 24, "113"},
        {2, "e", 15, "114"},
        {3, "b", 16, "115"},
        {4, "d", 176, "116"},
        {5, "ds", 13, "117"}
	
	};
	
	 int n = 5;  

    printf("Danh sach sinh vien ban dau:\n");
    printStudents(students, n);

    bubbleSort(students, n);

    printf("\nDanh sach sinh vien sau khi sep:\n");
    printStudents(students, n);
	
	return 0;
}
