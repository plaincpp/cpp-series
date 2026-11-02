struct Item {
    int id;
    int count;
};

int total(const Item& item) {
    return item.id + item.count;
}
