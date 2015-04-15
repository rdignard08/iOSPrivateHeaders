
@protocol NSCoding;
@interface UITableViewSection : NSObject <NSCoding> {

    NSString* _headerTitle;
    UIView* _headerView;
    NSString* _footerTitle;
    UIView* _footerView;
    NSArray* _rows;
}
@property (nonatomic, copy, readwrite) NSString* headerTitle;
@property (nonatomic, retain, readwrite) UIView* headerView;
@property (nonatomic, copy, readwrite) NSString* footerTitle;
@property (nonatomic, retain, readwrite) UIView* footerView;
@property (nonatomic, copy, readwrite) NSArray* rows;
 + (id) sectionWithRows:(id)a;

 - (void) setRows:(id)a;
 - (void) dealloc;
 - (id) headerView;
 - (void) setHeaderView:(id)a;
 - (id) rows;
 - (id) headerTitle;
 - (void) setHeaderTitle:(id)a;
 - (id) footerTitle;
 - (void) setFooterTitle:(id)a;
 - (id) footerView;
 - (void) setFooterView:(id)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end
