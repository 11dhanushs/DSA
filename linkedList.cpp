#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h> 
#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int,int> p32;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int> > vv32;
typedef vector<vector<ll> > vv64;
typedef vector<vector<p64> > vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
ll MOD = 998244353;
double eps = 1e-12;
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
 class Node{
     public:
     int data;
     Node *next;
 };
 void insertBeginning(Node** head_ref,int key)
 {
     Node *newNode = new Node();
     newNode->data = key;
     newNode->next = *head_ref;
     *head_ref = newNode;
 }
 void insertEnd(Node **head_ref,int key)
 {
     Node* newNode = new Node();
     newNode->data = key;
     newNode->next = NULL;
     if(*head_ref==NULL)
     {
         *head_ref = newNode;
     }
     else{
     Node* temp = *head_ref;
     while(temp->next!=NULL)
     {
         temp = temp->next;
     }
     temp->next = newNode;
     }
 }
 void deleteBeginning(Node **head_ref)
 {
     if(*head_ref!=NULL){
     Node *temp = *head_ref;
     temp = temp->next;
     *head_ref = temp;
     }
 }
 void traverse(Node* head_ref)
 {
     Node* temp = head_ref;
     while(temp!=NULL)
     {
         cout<<temp->data<<endl;
         temp = temp->next;
     }
 }
 void deleteEnd(Node **head_ref)
 {
     if(*head_ref!=NULL)
     {
     Node *temp = *head_ref;
     if(temp->next==NULL)
     {
         *head_ref = NULL;
     }
     else{
         while(temp->next->next!=NULL)
         {
             temp = temp->next;
             }
        temp->next =NULL;
     }
 }
 }
int main()
{
 Node *head = NULL;
 int n;
 cin>>n;
 int ele;
//  insertBeginning(&head,10); insert an integer at the beginning of the linked list
//  insertEnd(&head,20); insert an integer at the end of the linked list
//  deleteEnd(&head); delete the element at the end of the linked list
//  deleteBeginning(&head); delete the element at the beginning of the linked list
 //traverse(head); Use this function to traverse the linked list
 return 0;
}