

const char* processPayment(int paymerntId) {
    std::string result = "Processed payment with ID: " + std::to_string(paymentId);
    char* cstr = new char[result.length() + 1];
    std::strcpy(cstr, result.c_str());
    return cstr;

}
