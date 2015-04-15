
@protocol BSLogging;
@interface _BSCategoryLogger : NSObject <BSLogging> {

    NSString* _name;
    NSString* _category;
}
@property (nonatomic, retain, readwrite) NSString* name;
@property (nonatomic, retain, readwrite) NSString* category;

 - (void) dealloc;
 - (id) name;
 - (void) setCategory:(id)a ;
 - (void) setName:(id)a ;
 - (void) logWithFormat:(id)a arguments:([1{__va_list_tag=II^v^v}])b ;
 - (void) logWithFormat:(id)a ;
 - (id) initWithLoggerName:(id)a category:(id)b ;
 - (id) category;


@end
