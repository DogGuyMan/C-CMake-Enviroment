#include <stdio.h> 
#include <stdlib.h> 
#include <linkedlist.h>

int main() {
    printf("Hello Linked List Experiment\n");

    LinkedList* linkedList = InitLinkedList(10);
    
    linkedList->prepend(linkedList, 10);
    linkedList->prepend(linkedList, 20);
    linkedList->prepend(linkedList, 30);
    linkedList->prepend(linkedList, 40);
    linkedList->foreach(linkedList);

    linkedList->clear(linkedList);

    /* 
    Leak: 0x122f040f0  size=112  zone: MallocStackLoggingLiteZone_0x102ac0000   malloc in InitLinkedList  C  Project
        Call stack: 0x1805b4274 (dyld) start | 0x102a53708 (Project) main  main.c:8 | 0x102a537a4 (Project) InitLinkedList  linkedlist.c:7 | 0x18076e894 (libsystem_malloc.dylib) _malloc_zone_malloc_instrumented_or_legacy 

    Clear은 그저 linkedList의 내용물을 모두 지우는 것이지 linkedList 자체를 지우는 것이 아니다.
    따라서 linkedList를 free해주어야 한다.
    */
    free(linkedList);
    return 0;
}