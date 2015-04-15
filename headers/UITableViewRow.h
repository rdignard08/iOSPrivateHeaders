
@protocol NSCoding;
@interface UITableViewRow : NSObject <NSCoding> {

    q _indentationLevel;
    @"UITableViewCell" _cell;
    d _height;
}
@property (nonatomic, assign, readwrite) NSNumber* height;
@property (nonatomic, retain, readwrite) UITableViewCell* cell;
 + (id) row;

 - (void) dealloc;
 - (void) setIndentationLevel:(q)a;
 - (q) indentationLevel;
 - (id) cell;
 - (void) setCell:(id)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (d) height;
 - (void) setHeight:(d)a;


@end
