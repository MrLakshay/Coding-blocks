or (int i = 0; i < sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << "Not prime";
            break;
        }
    }
    cout << "Prime";