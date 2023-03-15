#include "../Ocean/Ocean.h"

class Sea : public Ocean
{
private:
    bool fromOcean;
    bool fromSea;
    Sea *parent;
    Ocean *ocean;
    string name;
public:
    Sea();
    Sea(const string& n, const string& l, double s, double d, double sA, double t, double sal);
    /*
     * Я думаю, что мы можем добиться уникального имени объекта, если у дочерних элементов будем переопределять методы
     * setName и getName. Рекурсивно вызывая эти методы у родительских элементов, пока не дойдем до корневого элемента.
     * Таким образом, мы сможем проверить, есть ли уже объект с таким именем.
     * Так же учитывать стоит, что море может и не быть частью иерархии. Для этого я добавил флаги fromOcean и fromSea.
     *
     * Я хотел бы также реализовать ссылки на дочерние элементы, чтобы проверить на уникальность имен всю иерархию.
     * Тогда нам нужна реализация динамического массива... Я не знаю, как это сделать, поэтому я оставлю эту затею.
     */
    Sea(Sea *obj, string n);
    Sea(Ocean *obj, string n);

    void setName(const string& n);
    string getName() const override;

    friend ostream &operator<<(ostream &stream, Sea obj);
    friend istream &operator>>(istream &stream, Sea &obj);
};