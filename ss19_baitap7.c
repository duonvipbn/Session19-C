#include <stdio.h>

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

void deleteStudent(int id ,struct student students[], int *n){
	for(int i = id; i < *n-1; i++){
		students[i] = students[i+1];
	}
	*n -= 1;
}

int main(){
	student students[5] = {
		
 		{1, "a", 24, "113"},
        {2, "b", 15, "114"},
        {3, "c", 16, "115"},
        {4, "d", 176, "116"},
        {5, "e", 13, "117"}
	
	};
	
	 int n = 5;  

    printf("Danh sach sinh vien ban dau:\n");
    printStudents(students, n);

    deleteStudent(3, students, &n);

    printf("\nDanh sach sinh vien sau khi xoa:\n");
    printStudents(students, n);
	
	return 0;
}
