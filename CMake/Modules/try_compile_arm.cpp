#if defined(__arm__)
// OK
#elif defined(__aarch64__)
// OK
#else
# error "Not an ARM architecture"
#endif

int main() {
}
