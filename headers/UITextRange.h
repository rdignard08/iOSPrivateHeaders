
@interface UITextRange : NSObject {

}
@property (nonatomic, assign, readonly, _isCaret) NSNumber* isCaret;
@property (nonatomic, assign, readonly, _isRanged) NSNumber* isRanged;
@property (nonatomic, assign, readonly, _isImpl) UITextRangeImpl* isImpl;
@property (nonatomic, assign, readonly, isEmpty) NSNumber* empty;
@property (nonatomic, assign, readonly) UITextPosition* start;
@property (nonatomic, assign, readonly) UITextPosition* end;

 - (BOOL) isEmpty;
 - (id) end;
 - (BOOL) _isRanged;
 - (BOOL) _isCaret;
 - (id) _isImpl;
 - (id) start;


@end
