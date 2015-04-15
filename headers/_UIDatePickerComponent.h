
@interface _UIDatePickerComponent : NSObject {

    unsigned long long _equivalentUnit;
    @"NSString" _formatString;
    unsigned long long _calendarUnit;
    double _width;
    {_NSRange="location"Q"length"Q} _unitRange;
}
@property (nonatomic, assign, readonly) NSString* formatString;
@property (nonatomic, assign, readonly) NSNumber* calendarUnit;
@property (nonatomic, assign, readonly) NSNumber* equivalentUnit;
@property (nonatomic, assign, readwrite) NSNumber* unitRange;
@property (nonatomic, assign, readwrite) NSNumber* width;
 + (id) componentsFromDateFormatString:(id)alocale:(id)b;
 + (id) componentsFromDateFormatString:(id)alocale:(id)bdesiredUnits:(long long)c;

 - (id) description;
 - (void) dealloc;
 - (unsigned long long) calendarUnit;
 - (id) formatString;
 - (unsigned long long) equivalentUnit;
 - (void) setUnitRange:({_NSRange=QQ})a;
 - ({_NSRange=QQ}) unitRange;
 - (id) _initWithFormatString:(id)acalendarUnit:(unsigned long long)b;
 - (double) width;
 - (void) setWidth:(double)a;


@end
