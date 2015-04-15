
@protocol UITableViewDelegate, UITableViewDataSource;
@interface UICompletionTable : UIView <UITableViewDelegate, UITableViewDataSource> {

    UICompletionTablePrivate* _private;
}
 + (id) _shadowImage;
 + (id) _cellFont;

 - (void) dealloc;
 - (void) setDelegate:(id)a ;
 - (void) reloadData;
 - (void) layoutSubviews;
 - (id) dequeueReusableCellWithIdentifier:(id)a ;
 - (void) tableView:(id)a didSelectRowAtIndexPath:(id)b ;
 - (long long) tableView:(id)a numberOfRowsInSection:(long long)b ;
 - (id) tableView:(id)a cellForRowAtIndexPath:(id)b ;
 - ({UIEdgeInsets=dddd}) contentInset;
 - (void) setContentInset:({UIEdgeInsets=dddd})a ;
 - (void) setScrollIndicatorInsets:({UIEdgeInsets=dddd})a ;
 - ({UIEdgeInsets=dddd}) scrollIndicatorInsets;
 - (id) _completionForRow:(long long)a ;
 - (void) setTopStrokeColor:(id)a ;
 - (id) delegate;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;


@end
