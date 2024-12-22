#include <stdio.h>

typedef struct {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
} Student;
void initializeStudents(Student students[], int *currentLength);
void addStudent(Student students[], int *currentLength);
void printStudents(const Student students[], int currentLength);

int main() {
    Student students[50];
    int currentLength = 0;

    initializeStudents(students, &currentLength);

    printf("Danh sach sinh vien ban dau:\n");
    printStudents(students, currentLength);

    addStudent(students, &currentLength);

    printf("Danh sach sinh vien sau khi them:\n");
    printStudents(students, currentLength);

    return 0;
}

void initializeStudents(Student students[], int *currentLength) {
    *currentLength = 5;

    students[0] = (Student){1, "Nguyen Van A", 20, "0123456789"};
    students[1] = (Student){2, "Nguyen Van B", 21, "03842804805"};
    students[2] = (Student){3, "Tran Van C", 22, "036206005709"};
    students[3] = (Student){4, "Pham Thi D", 19, "0384001030"};
    students[4] = (Student){5, "Do Van E", 23, "098765432"};
}

void addStudent(Student students[], int *currentLength) {
    if (*currentLength >=50) {
        printf("Khong the them sinh vien moi. Mang da day.\n");
        return;
    }

    Student newStudent;
    
    printf("Nhap ID: ");
    scanf("%d", &newStudent.id);
    
    printf("Nhap ten: ");
    fgets(newStudent.name, sizeof(newStudent.name), stdin);
    newStudent.name[strcspn(newStudent.name, "\n")] = '\0';
    
     fflush(stdin);
    printf("Nhap tuoi: ");
    scanf("%d", &newStudent.age);
   getchar(); 

    printf("Nhap so dien thoai: ");
    fgets(newStudent.phoneNumber, sizeof(newStudent.phoneNumber), stdin);
    newStudent.phoneNumber[strcspn(newStudent.phoneNumber, "\n")] = '\0';
     
    
    students[*currentLength] = newStudent;
    (*currentLength)++;

    printf("Da them sinh vien moi thanh cong.\n");
}

void printStudents(const Student students[], int currentLength) {
    for (int i = 0; i < currentLength; i++) {
        printf("ID: %d, Name: %s, Age: %d, Phone: %s\n",students[i].id, students[i].name, students[i].age, students[i].phoneNumber);
    }
}

