/**
 * Two threads chopping vegetables
 */
#include <thread>
#include <chrono>

bool chopping = true;

void vegetable_chopper(const char* name) {
    // unsigned int vegetable_count = 0;
    uint64_t vegetable_count = 0;
    while (chopping) {
        vegetable_count++;
    }
    printf("%s chopped %lu vegetables.\n", name, vegetable_count);
}

int main() {
    std::thread olivia(vegetable_chopper, "Olivia");
    std::thread barron(vegetable_chopper, "Barron");
    
	printf("Barron and Olivia are chopping vegetables...\n");
    std::this_thread::sleep_for(std::chrono::seconds(5));
    chopping = false;
    barron.join();
    olivia.join();
}