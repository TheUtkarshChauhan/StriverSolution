#include<bits/stdc++.h> // All libraries autmatically included
using namespace std;
int main(){

}
/*
C++ STL into four Parts
1. Algorithms
2. Containers
3. Functions
4. Iterators

a. Pairs
pair<int,int> p = {1,3};
p.first = 1 and p.second = 3
to add more to pairs we can use nested pairs
for example
pair<int,pair<int,int>> p = {1,{2,3}};
p.first =1 and p.second.first =2 and p.second.second =3
pair can be array 
pair<int,int>arr[] = {{1,2},{2,4},{3,5}};


Vectors (where you dont know the size)
vector<int> v;
v.push_back(1); enter the new element in empty or free space
(faster the push_back)v.emplace_back(2); enter the element dynamically into the next space

vector<pair<int,int>> vec;
v.push_back({1,2});
v.emplace_back({1,2});

vector<int> v(5,100);[100,100,100,100,100]
vector<int> v(5);[0,0,0,0,0,0] or garbage value

vector <int> v1(5,20);
vetor<int> v2(v1);//copying 

How to access the elements in a vector
v[0] or v.at(0)
similar as an array

other way is an itrators

vector<int>::iterator it = v.begin();(address of the first )
it++;//shift to next position
cout<<*(it)<<" ";

it = it+2;
cout<<*(it)<<" ";

vector<int>::iterator it = v.end(); //end will point to after the address to next of the last element
vector<int>::iterator it = v.rend(); //it will point to before the first reverse iteratot and reverse of ++ will be used
vector<int>::iterator it = v.rbegin(); // 
v.back(); // the address element at the last
for (vector<int>::iterator it = v.begin(); it != v.end(); it++)


for (auto it = v.begin(); it != v.end(); it++)

for (auto it : v)

deletion in a vector

{10,20,30,40}
v.erase(v.begin()+1);//means 20
{10,30,40}//reshuffling

to erase multiple
v.erase(v.begin()+2,v.begin()+4);

//Insert Function 
vector<int> v(2,100);//[100,100]
v.insert(v.begin(),300);[300,100,100];
v.insert(v.begin()+1,2,10);//[300,10,10,100,100]

vector<int> copy(2,50);//[50,50]
v.insert(v.begin(),copy.begin(),copy.end());//[50,50,300,10,10,100,100]

v.size(); size of vector
v.pop_back();//pop last element
v1->{10,20}
v2->{30,40}
v1.swap(v2);//v1->{30,40} and v2->{10,20};
v.clear();//delete all elements

v.empty();give boolean value that if it contains some elements or not in form of true or false




List explained
list<int>ls;
ls.push_back(2);//{2}
ls.emplace_back(4);//{2,4}
ls.push_front(5);//{5,2,4}
ls.emplace_front();{2,4}

rest function same as vector
//insert in a vector is costlier


Deque Explained
deque<int> dq;
dq.push_back(1);{1}
dq.emplace_back(2);{1,2}
dq.push_front(4);{4,1,2}\
dq.emplace_front(3);{3,4,1,2}

dq.pop_back();//delete form last
dq.pop_front();//delete from front
dq.back();
dq.front();

Stack Explained //LIFO
stack<int> st;
st.push(1);{1}
st.push(2);{2,1}
st.push(3);{3,2,1}
st.push(3);{3,3,2,1}
st.emplace(5);{5,3,3,2,1}
st.top();//print top of stack  **st[2] is invalid
st.pop(); pop one element from top of the stack
st.size(); size of the stack 
st.empty();check is the stack is empty or not
stack<int> st1,st2;
s1.swap(st2);

Queue Explained //FIFO
queue<int> q;
q.push(1);{1}
q.push(2);{1,2}
q.emplace(4);{1,2,4}

q.back() +=5;//adding 5 to last element
q.back();last element
q.front();first element
q{1,2,9}
q.pop();{2,9}

Priority Queue Explained
priority_queue<int> pq;
pq.push(5);{5}//log n complexity
pq.push(2);{5,2}
pq.push(6);{6,5,2}
pq.emplace(10);{10,6,5,2}
pq.top();//10//O(n) complexity
pq.pop();//log n
10 will be poped


//Minimum Heap which will store minimum element at the top 
priority_queue<int, vector<int>,greater<int>> pq;
pq.push(5);{5}
pq.push(2);{2,5}
pq.push(8);{2,5,8}
pq.emplace(10);{2,5,8,10}

pq.top();//2


Set container Explained
Set stores in sorted order and uniques itema
set<int> st;
st.insert(1);{1}
st.emplace(2);{1,2}
st.insert(2);{1,2}
st.insert(4);{1,2,4}
st.insert(3);{1,2,3,4}

//functionality of insert in vector
can be used also that only incesases efficiency

//{1,2,3,4,5}
auto it = st.find(3);
//{1,2,3,4,5}
auto it = st.find(6); if element not present then it will point ot the end
st.erase(5);//delete 5 and maintaine the sorted order

int cnt = st.count(1);
auto it =st.find(3);
st.eraes(it);//it takes constant time

auto it1 = st.find(2);
auto it2 = st.find(4);
st.erase(it1,it2);

//lower bound and upper bound 
auto it = st.lower_bound(2);
auto it = st.upper_bound(3);

MultiSet explained

multiset<int>ms;
ms.insert(1);//{1}
ms.insert(1);//{1,1}
ms.insert(1);//{1,1,1}

ms.erase(1);// all 1 is erased


ms.erase(ms.find(1));//only one single is erased
ms.erase(ms.find(1),ms.find(1)+2);

//rest akk function same as set


Unordered Set
everythin exactly like set but witout any sorted order
unordered_set<int> st;
//lower bound and upper bound do not work

Map Explained
map<int,int> mpp;
map<int, pair<int,int>> mpp;
map<pair<int,int>,int> mpp;

mpp[1] =2;
mpp.emplace({3,1});
mpp.insert({2,4});
mpp[{2,3}]=10;
{
    {1,2}
    {2,4}
    {3,1}
}

for (auto it : mpp){
    cout<<it.first<<" "<<it.second<<endl;
}

cout<< mpp[1];
cout<< mpp[5];

map stores unique keys in sorted order 

auto it = mpp.find(3);
cout<<*(it).second;
auto it = mpp.find(5);

auto it = mpp.lower_bound(2);
auto it =mpp.upper_bound(3);


Mulitmap Explained
//everything same as map, only it can store multiple keys 
// only mpp[key] cannot be used here
// can store duplicated keys in sorted order

Unordered map
//everything same as map, but the keys are not in sorted order

All the important Algorithms

a[] = {1,5,3,2}
to sort it we can use 

sort(a,a+4);
start,end;
or
sort(v.begin(),v.end());//for vector

for array arr[] = {1,3,5,2};
only 3-4 element to be sorted
sort(a+2,a+4);

to sort in decending order
sort(a,a+n,greater<int>);//automatically sort it into decreasing order

// to sort in my way
pair<int,int> a[] = {{1,2},{2,1},{4,1}};
//sort it according to second element 
// if second element is same, then sort
// it according ot first element but in descending order

sort(a,a+n,comp);
comp is self written comperator is just a boolean comparator

bool comp(par<int,int>p1, pair<int,int> p2){
    if(p1.second<p2.second) return true;
    if(p1.second>p2.second) return false;
    //if they are same
    if(p1.first>p2.first) return true;
    return false;
}


int num =7;
int cnt = __builtin_popcount();//return binary equivalent total number eg 3
matlab kitne digit ka binary number banega kigke msb me 1 hai
long long num = 1657856578687;
int cnt = __builtin_popcountll();


// next permutation
string s = "123";
do{
    cout<< s <<endl;

}while(next_permutation(s.begin(),s.end()));

int maxi = *max_element(a,a+n);// to find the max element in the array


*/