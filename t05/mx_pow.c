double mx_pow(double n, unsigned int pow) {
    double result = 1;
    if (pow == 0)
        return 1;
    for (int i = 0; i < pow; i++)
    {
        result *= n;
    }
    return result;
}
