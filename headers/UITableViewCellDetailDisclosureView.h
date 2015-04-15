
@interface UITableViewCellDetailDisclosureView : UIControl {

    UIButton* _infoButton;
    UIImageView* _disclosureView;
}

 - (void) dealloc;
 - (void) addTarget:(id)aaction:(SEL)bforControlEvents:(unsigned long long)c;
 - ({CGSize=dd}) sizeThatFits:({CGSize=dd})a;
 - (void) removeTarget:(id)aaction:(SEL)bforControlEvents:(unsigned long long)c;
 - (id) initWithTarget:(id)aaction:(SEL)b;


@end
