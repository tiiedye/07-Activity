# include <iostream>
# include <vector>

using namespace std;

int main() {
    vector <int> vector1;
    vector <int> vector2;

    vector1.push_back(10);
    vector1.push_back(20);

    cout << "The size of vector1 is: " << vector1.size() << endl;
    cout << "vector1 index 0 is: " << vector1.at(0) << endl;
    cout << "vector1 index 1 is: " << vector1.at(1) << endl;
    cout << endl;

    vector2.push_back(100);
    vector2.push_back(200);

    cout << "The size of vector2 is: " << vector2.size() << endl;
    cout << "vector2 index 0 is: " << vector2.at(0) << endl;
    cout << "vector2 index 1 is: " << vector2.at(1) << endl;
    cout << endl;

    vector <vector<int>> vector_2d;
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    cout << "Added vector1 and vector2 to vector_2d" << endl;
    cout << endl;

    cout << "Elements in vector_2d are:" << endl;
    cout << "{" << endl;
    cout << "   { " << vector_2d.at(0).at(0) << ", " << vector_2d.at(0).at(1) << " }," << endl;
    cout << "   { " << vector_2d.at(1).at(0) << ", " << vector_2d.at(1).at(1) << " }" << endl;
    cout << "}" << endl;
    cout << endl;

    cout << "Changing vector1 index 0 to 1000" << endl;
    vector1.at(0) = 1000;
    cout << endl;

    cout << "Elements in vector_2d are now:" << endl;
    cout << "{" << endl;
    cout << "   { " << vector_2d.at(0).at(0) << ", " << vector_2d.at(0).at(1) << " }," << endl;
    cout << "   { " << vector_2d.at(1).at(0) << ", " << vector_2d.at(1).at(1) << " }" << endl;
    cout << "}" << endl;
    cout << endl;

    cout << "The elements in vector1 are:" << endl;
    cout << "{ " << vector1.at(0) << ", " << vector1.at(1) << " }" << endl;
    cout << endl;

    cout << "The reason that vector_2d did not change after updating vector1 is because the vector1 added to vector_2d is never updated or changed, only the stand-alone vector1." << endl;

    return 0;
}