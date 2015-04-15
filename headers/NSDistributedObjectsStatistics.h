
@interface NSDistributedObjectsStatistics : NSDictionary {

    Q requestsReceived;
    Q repliesSent;
    Q requestsSent;
    Q repliesReceived;
}

 - (void) addStatistics:(id)a;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (Q) count;
 - (id) objectForKey:(id)a;
 - (id) keyEnumerator;
 - (id) allKeys;


@end
