package com.atella.book.designpattern.Proxy.normal;

import com.atella.book.designpattern.Proxy.Subject;

/**
 * Created by chenyuan on 2017/3/30.
 */
public class Client {

    public static void main(String[] args) {
        Subject proxy = new Proxy("subject-1");
        proxy.request();
    }
}
