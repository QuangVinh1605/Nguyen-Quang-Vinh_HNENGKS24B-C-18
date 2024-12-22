#include <stdio.h>
#include <string.h>

typedef struct {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
} Student;

void initializeStudents(Student students[], int *currentLength);
void deleteStudentById(int id, Student students[], int *currentLength);
void printStudents(const Student students[], int currentLength);

int main() {
    Student students[5];
    int currentLength = 0;

    initializeStudents(students, &currentLength);

    printf("Danh sach sinh vien ban dau:\n");
    printStudents(students, currentLength);

    int idToDelete;
    printf("Nhap id sinh vien can xoa: ");
    scanf("%d", &idToDelete);

    deleteStudentById(idToDelete, students, &currentLength);

    printf("Danh sach sinh vien sau khi xoa:\n");
    printStudents(students, currentLength);

    return 0;
}

void initializeStudents(Student students[], int *currentLength) {
    *currentLength = 5;

    students[0] = (Student){1, "Nguyen Van A", 20, "0123456789"};
    students[1] = (Student){2, "Le Thi B", 21, "0987654321"};
    students[2] = (Student){3, "Tran Van C", 22, "0912345678"};
    students[3] = (Student){4, "Pham Thi D", 19, "0945678912"};
    students[4] = (Student){5, "Do Van E", 23, "0967891234"};
}

void deleteStudentById(int id, Student students[], int *currentLength) {
    int indexToDelete = -1;

    for (int i = 0; i < *currentLength; i++) {
        if (students[i].id == id) {
            indexToDelete = i;
            break;
        }
    }

    if (indexToDelete == -1) {
        printf("Khong tim thay sinh vien voi id %d.\n", id);
        return;
    }

    for (int i = indexToDelete; i < *currentLength - 1; i++) {
        students[i] = students[i + 1];
    }

    (*currentLength)--;
    printf("Da xoa sinh vien voi id %d.\n", id);
}

void printStudents(const Student students[], int currentLength) {
    for (int i = 0; i < currentLength; i++) {
        printf("ID: %d, Name: %s, Age: %d, Phone: %s\n",
               students[i].id, students[i].name, students[i].age, students[i].phoneNumber);
    }
}

