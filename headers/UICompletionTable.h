
@protocol UITableViewDelegate, UITableViewDataSource;
@interface UICompletionTable : UIView <UITableViewDelegate, UITableViewDataSource> {

    @"UICompletionTablePrivate" _private;
}
 + (id) _shadowImage;
 + (id) _cellFont;

 - (void) dealloc;
 - (void) setDelegate:(id)a;
 - (void) reloadData;
 - (void) layoutSubviews;
 - (id) dequeueReusableCellWithIdentifier:(id)a;
 - (void) tableView:(id)adidSelectRowAtIndexPath:(id)b;
 - (q) tableView:(id)anumberOfRowsInSection:(q)b;
 - (id) tableView:(id)acellForRowAtIndexPath:(id)b;
 - ({UIEdgeInsets=dddd}) contentInset;
 - (void) setContentInset:({UIEdgeInsets=dddd})a;
 - (void) setScrollIndicatorInsets:({UIEdgeInsets=dddd})a;
 - ({UIEdgeInsets=dddd}) scrollIndicatorInsets;
 - (id) _completionForRow:(q)a;
 - (void) setTopStrokeColor:(id)a;
 - (id) delegate;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
