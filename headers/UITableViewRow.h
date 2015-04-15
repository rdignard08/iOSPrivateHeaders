
@protocol NSCoding;
@interface UITableViewRow : NSObject <NSCoding> {

    long long _indentationLevel;
    UITableViewCell* _cell;
    double _height;
}
@property (nonatomic, assign, readwrite) NSNumber* height;
@property (nonatomic, retain, readwrite) UITableViewCell* cell;
 + (id) row;

 - (void) dealloc;
 - (void) setIndentationLevel:(long long)a ;
 - (long long) indentationLevel;
 - (id) cell;
 - (void) setCell:(id)a ;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (double) height;
 - (void) setHeight:(double)a ;


@end
