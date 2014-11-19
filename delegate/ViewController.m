//
//  ViewController.m
//  delegate
//
//  Created by Bsetecip10 on 07/11/14.
//  Copyright (c) 2014 gyana. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    sampleprotocol *sample=[[sampleprotocol alloc]init];
    sample.delegate = self;
    [lable setText:@"gyana gyana gyana gyana"];
    [sample startSampleProcess];

}

-(void)processCompleted
{
    [lable setText:@"jitu jitu jitu"];
}


- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
