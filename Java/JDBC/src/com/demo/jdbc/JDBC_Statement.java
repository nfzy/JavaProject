package com.demo.jdbc;

import org.junit.Test;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.Statement;

public class JDBC_Statement {

    @Test
    public void testDML() throws Exception {

        String url = "jdbc:mysql://localhost:3306/test?useSSL=false";
        String username = "root";
        String password = "232330";
        Connection conn = DriverManager.getConnection(url,username,password);
        String sql = "update stu set name = '张可' where id = 666";

        Statement stmt = conn.createStatement();

        int count = stmt.executeUpdate(sql);

        if(count > 0)
            System.out.println("修改成功1");
        else
            System.out.println("修改失败!");

        stmt.close();
        conn.close();
    }

    @Test
    public void testDDL() throws Exception{
        String url = "jdbc:mysql://localhost:3306/test?useSSL=false";
        String username = "root";
        String password = "232330";
        Connection conn = DriverManager.getConnection(url,username,password);

        String sql = "CREATE DATABASE db";

        Statement stmt = conn.createStatement();

        int count = stmt.executeUpdate(sql);

        System.out.println(count);

//        if(count > 0)
//            System.out.println("修改成功1");
//        else
//            System.out.println("修改失败!");


        stmt.close();
        conn.close();
    }
}

