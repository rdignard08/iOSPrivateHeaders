
@interface NSDistributedObjectsStatistics : NSDictionary {

    unsigned long long requestsReceived;
    unsigned long long repliesSent;
    unsigned long long requestsSent;
    unsigned long long repliesReceived;
}

 - (void) addStatistics:(id)a ;
 - (id) copyWithZone:(^{_NSZone=})a ;
 - (unsigned long long) count;
 - (id) objectForKey:(id)a ;
 - (id) keyEnumerator;
 - (id) allKeys;


@end
