
@interface _UIDatePickerComponent : NSObject {

    Q _equivalentUnit;
    @"NSString" _formatString;
    Q _calendarUnit;
    d _width;
    {_NSRange="location"Q"length"Q} _unitRange;
}
@property (nonatomic, assign, readonly) NSString* formatString;
@property (nonatomic, assign, readonly) NSNumber* calendarUnit;
@property (nonatomic, assign, readonly) NSNumber* equivalentUnit;
@property (nonatomic, assign, readwrite) NSNumber* unitRange;
@property (nonatomic, assign, readwrite) NSNumber* width;
 + (id) componentsFromDateFormatString:(id)alocale:(id)b;
 + (id) componentsFromDateFormatString:(id)alocale:(id)bdesiredUnits:(q)c;

 - (id) description;
 - (void) dealloc;
 - (Q) calendarUnit;
 - (id) formatString;
 - (Q) equivalentUnit;
 - (void) setUnitRange:({_NSRange=QQ})a;
 - ({_NSRange=QQ}) unitRange;
 - (id) _initWithFormatString:(id)acalendarUnit:(Q)b;
 - (d) width;
 - (void) setWidth:(d)a;


@end
