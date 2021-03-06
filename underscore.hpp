#pragma once

template <typename Iterator, typename Function>
void each(Iterator begin, Iterator end, Function function);

template <typename Iterator, typename Function>
void transform(Iterator first_begin, Iterator first_end, Iterator second_begin, Function function);

template <typename Container, typename Function>
Container filter_accept(Container &container, Function function);

template <typename Container, typename Function>
Container filter_reject(Container &container, Function function);

template <typename Iterator, typename Predicate>
Iterator find_if(Iterator begin, Iterator end, Predicate predicate);

template <typename Iterator, typename Predicate>
Iterator find_if_not(Iterator begin, Iterator end, Predicate predicate);

template <typename Iterator, typename Predicate>
bool every(Iterator begin, Iterator end, Predicate predicate);

template <typename Iterator, typename Predicate>
bool any(Iterator begin, Iterator end, Predicate predicate);

template <typename Container>
typename Container::const_iterator max(Container container);

template <typename Container>
typename Container::const_iterator min(Container container);

template <typename Iterator, typename Predicate>
int count_by(Iterator begin, Iterator end, Predicate predicate);

template <typename Iterator, typename Data>
bool contains(Iterator begin, Iterator end, Data data);

template <typename Iterator, typename Data, typename X, typename Y>
bool contains(Iterator begin, Iterator end, std::pair<X, Y> p);

template <typename Container>
int size(Container container);

template <typename Container, typename ... Containers>
Container intersect(Container container1, Container container2, Containers ... others);

template <typename Container, typename ... Containers>
Container set_union(Container container1, Container container2, Containers  ... others);

template <typename Container>
Container set_union(Container container);
