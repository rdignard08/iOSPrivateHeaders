
@interface _UITextKitTextPosition : UITextPosition {

    q _offset;
    q _affinity;
}
 + (id) positionWithOffset:(q)a;
 + (id) positionWithOffset:(q)aaffinity:(q)b;

 - (id) description;
 - (BOOL) isEqual:(id)a;
 - (q) affinity;
 - (void) setAffinity:(q)a;
 - (id) init;
 - (q) offset;
 - (void) setOffset:(q)a;


@end
