

void test_1();
void test_1_1();

void test_1() {
	test_1_1();
}

void test_1_1() {
	test_1_1_1();
}

int main(int argc, char *argv[]) {
	test_1();
	/*
	test_2();
	*/
}
