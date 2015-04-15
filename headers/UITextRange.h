
@interface UITextRange : NSObject {

}
@property (nonatomic, assign, readonly, getter=_isCaret) NSNumber* isCaret;
@property (nonatomic, assign, readonly, getter=_isRanged) NSNumber* isRanged;
@property (nonatomic, assign, readonly, getter=_isImpl) UITextRangeImpl* isImpl;
@property (nonatomic, assign, readonly, getter=isEmpty) NSNumber* empty;
@property (nonatomic, assign, readonly) UITextPosition* start;
@property (nonatomic, assign, readonly) UITextPosition* end;

 - (BOOL) isEmpty;
 - (id) end;
 - (BOOL) _isRanged;
 - (BOOL) _isCaret;
 - (id) _isImpl;
 - (id) start;


@end
