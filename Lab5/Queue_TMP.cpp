#include <iostream>
#include <stdlib.h>
using namespace std;
template <typename T>
struct Node
{
    int x;
    Node* Next;
};
class List
{
    T* Head, * Tail; //Указатели на начало списка и на конец
public:
    List() :Head(NULL), Tail(NULL) {}; //Инициализация указателей как пустых
    ~List(); //Деструктор для освобождения памяти от всего что будет
    void Push(T x); //Функция заполнения структуры Node и добавления её в список как элемента
    void Peek();//Функция отображения крайнего элемента
    void Pop();//Удаление первого элемента
    friend ostream& operator << (ostream& stream, const List& a); // Перегрузка оператора вывода
};
List::~List() //ДЕСТРУКТОР ДЛЯ ОЧИСТКИ ПАМЯТИ
{
    Node* temp = Head; //Временный указатель на начало списка
    while (temp != 0) //Пока в списке что-то есть
    {
        temp = Head->Next; //Резерв адреса на следующий элемент списка
        delete Head;  //Освобождение памяти от первой структуры как элемента списка
        Head = temp; //Сдвиг начала на следующий адрес, который берем из резерва
    }
}
void List::Push(T x)
{
    Node* temp = new Node; //Выделение памяти для нового звена списка
    temp->x = x; //Временное запоминание принятого параметра x
    temp->Next = NULL; //Указание, что следующее звено новосозданной структуры пока пустое

    if (Head != NULL) //Если список не пуст 
    {
        Tail->Next = temp; //Указание, что следующее звено списка это новосозданная структура
        Tail = temp;
    }
    else Head = Tail = temp; //Если список не пуст, добавление первого элемента
}
ostream& operator << (ostream& stream, const List& a)
{
    Node* temp = a.Head; //Временный указатель на начало списка
    while (temp != NULL) //Пока в списке что-то встречается
    {
        stream << temp->x << ""; //Выводим значения из списка на экран
        temp = temp->Next; //Сдвигаем указатель на начало на адрес следующего элемента
    }
    return stream << endl;
}
T List::Peek()
{
    cout << Head->x;
}
T List::Pop()
{
    Head = Head->Next;
}
void main()
{
    List lst;
    int size, count;
    cout << "Size = ";
    cin >> size;
    for (int i = 1; i <= size; i++)
    {
        cout << "Count " << i << "/" << size << " = ";
        cin >> count;
        lst.Push(count);
    }
    cout << lst;
    lst.Peek();
    lst.Pop();
    cout << endl;
    cout << lst;
}