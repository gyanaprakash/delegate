//
//  ViewController.h
//  delegate
//
//  Created by Bsetecip10 on 07/11/14.
//  Copyright (c) 2014 gyana. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "sampleprotocol.h"

@interface ViewController : UIViewController <SampleProtocolDelegate,UITableViewDelegate>

{
    __weak IBOutlet UILabel *lable;
    
}
@end

