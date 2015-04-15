
@interface UITableViewCountView : UILabel {

    NSString* _countString;
    int _count;
}

 - (void) setCount:(long long)a ;
 - (void) dealloc;
 - (long long) count;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a withCountString:(id)b withCount:(long long)c ;
 - (void) setCountString:(id)a withCount:(long long)b ;


@end
