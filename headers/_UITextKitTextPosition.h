
@interface _UITextKitTextPosition : UITextPosition {

    long long _offset;
    long long _affinity;
}
 + (id) positionWithOffset:(long long)a;
 + (id) positionWithOffset:(long long)aaffinity:(long long)b;

 - (id) description;
 - (BOOL) isEqual:(id)a;
 - (long long) affinity;
 - (void) setAffinity:(long long)a;
 - (id) init;
 - (long long) offset;
 - (void) setOffset:(long long)a;


@end
