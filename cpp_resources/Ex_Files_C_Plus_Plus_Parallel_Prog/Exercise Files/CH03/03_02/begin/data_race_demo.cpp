/**
 * Two shoppers adding items to a shared notepad
 */
#include <thread>

unsigned int garlic_count = 0;

void shopper() {
    for (int i=0; i<10000000; i++) {
        garlic_count++;
    }
}

int main() {
    std::thread barron(shopper);
    std::thread olivia(shopper);
    barron.join();
    olivia.join();
    printf("We should buy %u garlic.\n", garlic_count);
}

/*
line 9 can cause a data race.
Critical regions access a shared resource. Protect so only one thread can act on it at a time. Incrementing a value is a crtical region. Each step needs to read, update and write uninterupted. This is an atomic operation. It is uninteruptable.
Aquiring a mutex is an atomic operation.
*/