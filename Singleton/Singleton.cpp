class Singleton
{
private:
    /* data */
    Singleton();

public:
    static Singleton *get_instance()
    {
        return HolderClass::instance;
    }
};
Singleton::Singleton()
{
}

int main() {}
